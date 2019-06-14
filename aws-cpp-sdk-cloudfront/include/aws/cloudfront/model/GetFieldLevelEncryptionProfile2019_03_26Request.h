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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API GetFieldLevelEncryptionProfile2019_03_26Request : public CloudFrontRequest
  {
  public:
    GetFieldLevelEncryptionProfile2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFieldLevelEncryptionProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline GetFieldLevelEncryptionProfile2019_03_26Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline GetFieldLevelEncryptionProfile2019_03_26Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Get the ID for the field-level encryption profile information.</p>
     */
    inline GetFieldLevelEncryptionProfile2019_03_26Request& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
