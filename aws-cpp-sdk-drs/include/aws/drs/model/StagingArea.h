/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/ExtensionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{

  /**
   * <p>Staging information related to source server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StagingArea">AWS API
   * Reference</a></p>
   */
  class StagingArea
  {
  public:
    AWS_DRS_API StagingArea();
    AWS_DRS_API StagingArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StagingArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline StagingArea& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline StagingArea& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline StagingArea& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline const Aws::String& GetStagingAccountID() const{ return m_stagingAccountID; }

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline bool StagingAccountIDHasBeenSet() const { return m_stagingAccountIDHasBeenSet; }

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline void SetStagingAccountID(const Aws::String& value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID = value; }

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline void SetStagingAccountID(Aws::String&& value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID = std::move(value); }

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline void SetStagingAccountID(const char* value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID.assign(value); }

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline StagingArea& WithStagingAccountID(const Aws::String& value) { SetStagingAccountID(value); return *this;}

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline StagingArea& WithStagingAccountID(Aws::String&& value) { SetStagingAccountID(std::move(value)); return *this;}

    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline StagingArea& WithStagingAccountID(const char* value) { SetStagingAccountID(value); return *this;}


    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline const Aws::String& GetStagingSourceServerArn() const{ return m_stagingSourceServerArn; }

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline bool StagingSourceServerArnHasBeenSet() const { return m_stagingSourceServerArnHasBeenSet; }

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline void SetStagingSourceServerArn(const Aws::String& value) { m_stagingSourceServerArnHasBeenSet = true; m_stagingSourceServerArn = value; }

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline void SetStagingSourceServerArn(Aws::String&& value) { m_stagingSourceServerArnHasBeenSet = true; m_stagingSourceServerArn = std::move(value); }

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline void SetStagingSourceServerArn(const char* value) { m_stagingSourceServerArnHasBeenSet = true; m_stagingSourceServerArn.assign(value); }

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline StagingArea& WithStagingSourceServerArn(const Aws::String& value) { SetStagingSourceServerArn(value); return *this;}

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline StagingArea& WithStagingSourceServerArn(Aws::String&& value) { SetStagingSourceServerArn(std::move(value)); return *this;}

    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline StagingArea& WithStagingSourceServerArn(const char* value) { SetStagingSourceServerArn(value); return *this;}


    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline const ExtensionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline void SetStatus(const ExtensionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline void SetStatus(ExtensionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline StagingArea& WithStatus(const ExtensionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline StagingArea& WithStatus(ExtensionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_stagingAccountID;
    bool m_stagingAccountIDHasBeenSet = false;

    Aws::String m_stagingSourceServerArn;
    bool m_stagingSourceServerArnHasBeenSet = false;

    ExtensionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
