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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides updates to the parallelism count.</p>
   */
  class AWS_KINESISANALYTICS_API InputParallelismUpdate
  {
  public:
    InputParallelismUpdate();
    InputParallelismUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    InputParallelismUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline int GetCountUpdate() const{ return m_countUpdate; }

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline void SetCountUpdate(int value) { m_countUpdateHasBeenSet = true; m_countUpdate = value; }

    /**
     * <p>Number of in-application streams to create for the specified streaming
     * source.</p>
     */
    inline InputParallelismUpdate& WithCountUpdate(int value) { SetCountUpdate(value); return *this;}

  private:
    int m_countUpdate;
    bool m_countUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
