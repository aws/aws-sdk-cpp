/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to delete an IP address filter. You use IP address
   * filters when you receive email with Amazon SES. For more information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API DeleteReceiptFilterRequest : public SESRequest
  {
  public:
    DeleteReceiptFilterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline DeleteReceiptFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline DeleteReceiptFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the IP address filter to delete.</p>
     */
    inline DeleteReceiptFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}

  private:
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
