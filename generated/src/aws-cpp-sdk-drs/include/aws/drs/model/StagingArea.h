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
    AWS_DRS_API StagingArea() = default;
    AWS_DRS_API StagingArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API StagingArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Shows an error message that occurred when DRS tried to access the staging
     * source server. In this case StagingArea$status will have value
     * EXTENSION_ERROR</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    StagingArea& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the account to which source server belongs. If this source
     * server is extended - shows Account ID of staging source server.</p>
     */
    inline const Aws::String& GetStagingAccountID() const { return m_stagingAccountID; }
    inline bool StagingAccountIDHasBeenSet() const { return m_stagingAccountIDHasBeenSet; }
    template<typename StagingAccountIDT = Aws::String>
    void SetStagingAccountID(StagingAccountIDT&& value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID = std::forward<StagingAccountIDT>(value); }
    template<typename StagingAccountIDT = Aws::String>
    StagingArea& WithStagingAccountID(StagingAccountIDT&& value) { SetStagingAccountID(std::forward<StagingAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Arn of the staging source server if this source server is extended</p>
     */
    inline const Aws::String& GetStagingSourceServerArn() const { return m_stagingSourceServerArn; }
    inline bool StagingSourceServerArnHasBeenSet() const { return m_stagingSourceServerArnHasBeenSet; }
    template<typename StagingSourceServerArnT = Aws::String>
    void SetStagingSourceServerArn(StagingSourceServerArnT&& value) { m_stagingSourceServerArnHasBeenSet = true; m_stagingSourceServerArn = std::forward<StagingSourceServerArnT>(value); }
    template<typename StagingSourceServerArnT = Aws::String>
    StagingArea& WithStagingSourceServerArn(StagingSourceServerArnT&& value) { SetStagingSourceServerArn(std::forward<StagingSourceServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of Source server extension. Possible values: (a) NOT_EXTENDED - This
     * is a source server that is replicating in the current account. (b) EXTENDED -
     * Source server is extended from a staging source server. In this case, the value
     * of stagingSourceServerArn is pointing to the Arn of the source server in the
     * staging account. (c) EXTENSION_ERROR - Some issue occurred when accessing
     * staging source server. In this case, errorMessage field will contain an error
     * message that explains what happened.</p>
     */
    inline ExtensionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExtensionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StagingArea& WithStatus(ExtensionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_stagingAccountID;
    bool m_stagingAccountIDHasBeenSet = false;

    Aws::String m_stagingSourceServerArn;
    bool m_stagingSourceServerArnHasBeenSet = false;

    ExtensionStatus m_status{ExtensionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
