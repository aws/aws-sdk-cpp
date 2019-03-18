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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/ResultFrame.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * SQL statement execution result<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/SqlStatementResult">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API SqlStatementResult
  {
  public:
    SqlStatementResult();
    SqlStatementResult(Aws::Utils::Json::JsonView jsonValue);
    SqlStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Number of rows updated.
     */
    inline long long GetNumberOfRecordsUpdated() const{ return m_numberOfRecordsUpdated; }

    /**
     * Number of rows updated.
     */
    inline bool NumberOfRecordsUpdatedHasBeenSet() const { return m_numberOfRecordsUpdatedHasBeenSet; }

    /**
     * Number of rows updated.
     */
    inline void SetNumberOfRecordsUpdated(long long value) { m_numberOfRecordsUpdatedHasBeenSet = true; m_numberOfRecordsUpdated = value; }

    /**
     * Number of rows updated.
     */
    inline SqlStatementResult& WithNumberOfRecordsUpdated(long long value) { SetNumberOfRecordsUpdated(value); return *this;}


    /**
     * ResultFrame returned by executing the sql statement
     */
    inline const ResultFrame& GetResultFrame() const{ return m_resultFrame; }

    /**
     * ResultFrame returned by executing the sql statement
     */
    inline bool ResultFrameHasBeenSet() const { return m_resultFrameHasBeenSet; }

    /**
     * ResultFrame returned by executing the sql statement
     */
    inline void SetResultFrame(const ResultFrame& value) { m_resultFrameHasBeenSet = true; m_resultFrame = value; }

    /**
     * ResultFrame returned by executing the sql statement
     */
    inline void SetResultFrame(ResultFrame&& value) { m_resultFrameHasBeenSet = true; m_resultFrame = std::move(value); }

    /**
     * ResultFrame returned by executing the sql statement
     */
    inline SqlStatementResult& WithResultFrame(const ResultFrame& value) { SetResultFrame(value); return *this;}

    /**
     * ResultFrame returned by executing the sql statement
     */
    inline SqlStatementResult& WithResultFrame(ResultFrame&& value) { SetResultFrame(std::move(value)); return *this;}

  private:

    long long m_numberOfRecordsUpdated;
    bool m_numberOfRecordsUpdatedHasBeenSet;

    ResultFrame m_resultFrame;
    bool m_resultFrameHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
