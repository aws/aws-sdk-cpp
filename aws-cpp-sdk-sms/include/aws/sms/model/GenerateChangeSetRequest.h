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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API GenerateChangeSetRequest : public SMSRequest
  {
  public:
    GenerateChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateChangeSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application associated with the change set.</p>
     */
    inline GenerateChangeSetRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Format for the change set.</p>
     */
    inline const OutputFormat& GetChangesetFormat() const{ return m_changesetFormat; }

    /**
     * <p>Format for the change set.</p>
     */
    inline bool ChangesetFormatHasBeenSet() const { return m_changesetFormatHasBeenSet; }

    /**
     * <p>Format for the change set.</p>
     */
    inline void SetChangesetFormat(const OutputFormat& value) { m_changesetFormatHasBeenSet = true; m_changesetFormat = value; }

    /**
     * <p>Format for the change set.</p>
     */
    inline void SetChangesetFormat(OutputFormat&& value) { m_changesetFormatHasBeenSet = true; m_changesetFormat = std::move(value); }

    /**
     * <p>Format for the change set.</p>
     */
    inline GenerateChangeSetRequest& WithChangesetFormat(const OutputFormat& value) { SetChangesetFormat(value); return *this;}

    /**
     * <p>Format for the change set.</p>
     */
    inline GenerateChangeSetRequest& WithChangesetFormat(OutputFormat&& value) { SetChangesetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    OutputFormat m_changesetFormat;
    bool m_changesetFormatHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
