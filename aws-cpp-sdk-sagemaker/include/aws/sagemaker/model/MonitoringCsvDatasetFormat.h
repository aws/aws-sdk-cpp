/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the CSV dataset format used when running a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringCsvDatasetFormat">AWS
   * API Reference</a></p>
   */
  class MonitoringCsvDatasetFormat
  {
  public:
    AWS_SAGEMAKER_API MonitoringCsvDatasetFormat();
    AWS_SAGEMAKER_API MonitoringCsvDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringCsvDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates if the CSV data has a header.</p>
     */
    inline bool GetHeader() const{ return m_header; }

    /**
     * <p>Indicates if the CSV data has a header.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>Indicates if the CSV data has a header.</p>
     */
    inline void SetHeader(bool value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>Indicates if the CSV data has a header.</p>
     */
    inline MonitoringCsvDatasetFormat& WithHeader(bool value) { SetHeader(value); return *this;}

  private:

    bool m_header;
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
