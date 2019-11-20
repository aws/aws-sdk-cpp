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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>AWS IoT Analytics parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AwsIotAnalyticsParameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API AwsIotAnalyticsParameters
  {
  public:
    AwsIotAnalyticsParameters();
    AwsIotAnalyticsParameters(Aws::Utils::Json::JsonView jsonValue);
    AwsIotAnalyticsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dataset name.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }

    /**
     * <p>Dataset name.</p>
     */
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }

    /**
     * <p>Dataset name.</p>
     */
    inline void SetDataSetName(const Aws::String& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = value; }

    /**
     * <p>Dataset name.</p>
     */
    inline void SetDataSetName(Aws::String&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::move(value); }

    /**
     * <p>Dataset name.</p>
     */
    inline void SetDataSetName(const char* value) { m_dataSetNameHasBeenSet = true; m_dataSetName.assign(value); }

    /**
     * <p>Dataset name.</p>
     */
    inline AwsIotAnalyticsParameters& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}

    /**
     * <p>Dataset name.</p>
     */
    inline AwsIotAnalyticsParameters& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}

    /**
     * <p>Dataset name.</p>
     */
    inline AwsIotAnalyticsParameters& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}

  private:

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
