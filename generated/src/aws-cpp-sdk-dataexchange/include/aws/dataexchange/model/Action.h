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
    AWS_DATAEXCHANGE_API Action();
    AWS_DATAEXCHANGE_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline const AutoExportRevisionToS3RequestDetails& GetExportRevisionToS3() const{ return m_exportRevisionToS3; }

    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline bool ExportRevisionToS3HasBeenSet() const { return m_exportRevisionToS3HasBeenSet; }

    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline void SetExportRevisionToS3(const AutoExportRevisionToS3RequestDetails& value) { m_exportRevisionToS3HasBeenSet = true; m_exportRevisionToS3 = value; }

    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline void SetExportRevisionToS3(AutoExportRevisionToS3RequestDetails&& value) { m_exportRevisionToS3HasBeenSet = true; m_exportRevisionToS3 = std::move(value); }

    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline Action& WithExportRevisionToS3(const AutoExportRevisionToS3RequestDetails& value) { SetExportRevisionToS3(value); return *this;}

    /**
     * <p>Details for the export revision to Amazon S3 action.</p>
     */
    inline Action& WithExportRevisionToS3(AutoExportRevisionToS3RequestDetails&& value) { SetExportRevisionToS3(std::move(value)); return *this;}

  private:

    AutoExportRevisionToS3RequestDetails m_exportRevisionToS3;
    bool m_exportRevisionToS3HasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
