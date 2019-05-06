/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AWS_STS_API DecodeAuthorizationMessageRequest : public STSRequest
  {
  public:
    DecodeAuthorizationMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecodeAuthorizationMessage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline const Aws::String& GetEncodedMessage() const{ return m_encodedMessage; }

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline bool EncodedMessageHasBeenSet() const { return m_encodedMessageHasBeenSet; }

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline void SetEncodedMessage(const Aws::String& value) { m_encodedMessageHasBeenSet = true; m_encodedMessage = value; }

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline void SetEncodedMessage(Aws::String&& value) { m_encodedMessageHasBeenSet = true; m_encodedMessage = std::move(value); }

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline void SetEncodedMessage(const char* value) { m_encodedMessageHasBeenSet = true; m_encodedMessage.assign(value); }

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline DecodeAuthorizationMessageRequest& WithEncodedMessage(const Aws::String& value) { SetEncodedMessage(value); return *this;}

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline DecodeAuthorizationMessageRequest& WithEncodedMessage(Aws::String&& value) { SetEncodedMessage(std::move(value)); return *this;}

    /**
     * <p>The encoded message that was returned with the response.</p>
     */
    inline DecodeAuthorizationMessageRequest& WithEncodedMessage(const char* value) { SetEncodedMessage(value); return *this;}

  private:

    Aws::String m_encodedMessage;
    bool m_encodedMessageHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
