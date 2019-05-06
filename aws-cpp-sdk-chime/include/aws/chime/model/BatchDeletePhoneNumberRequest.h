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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API BatchDeletePhoneNumberRequest : public ChimeRequest
  {
  public:
    BatchDeletePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePhoneNumber"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>List of phone number IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberIds() const{ return m_phoneNumberIds; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline bool PhoneNumberIdsHasBeenSet() const { return m_phoneNumberIdsHasBeenSet; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline void SetPhoneNumberIds(const Aws::Vector<Aws::String>& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = value; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline void SetPhoneNumberIds(Aws::Vector<Aws::String>&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = std::move(value); }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(const Aws::Vector<Aws::String>& value) { SetPhoneNumberIds(value); return *this;}

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(Aws::Vector<Aws::String>&& value) { SetPhoneNumberIds(std::move(value)); return *this;}

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const Aws::String& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(Aws::String&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(std::move(value)); return *this; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const char* value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_phoneNumberIds;
    bool m_phoneNumberIdsHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
