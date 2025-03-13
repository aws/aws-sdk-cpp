/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/AutoExportRevisionToS3RequestDetails.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>What occurs after a certain event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_DATAEXCHANGE_API Action() = default;
    AWS_DATAEXCHANGE_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline const AutoExportRevisionToS3RequestDetails& GetExportRevisionToS3() const { return m_exportRevisionToS3; }
    inline bool ExportRevisionToS3HasBeenSet() const { return m_exportRevisionToS3HasBeenSet; }
    template<typename ExportRevisionToS3T = AutoExportRevisionToS3RequestDetails>
    void SetExportRevisionToS3(ExportRevisionToS3T&& value) { m_exportRevisionToS3HasBeenSet = true; m_exportRevisionToS3 = std::forward<ExportRevisionToS3T>(value); }
    template<typename ExportRevisionToS3T = AutoExportRevisionToS3RequestDetails>
    Action& WithExportRevisionToS3(ExportRevisionToS3T&& value) { SetExportRevisionToS3(std::forward<ExportRevisionToS3T>(value)); return *this;}
    ///@}
  private:

    AutoExportRevisionToS3RequestDetails m_exportRevisionToS3;
    bool m_exportRevisionToS3HasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
