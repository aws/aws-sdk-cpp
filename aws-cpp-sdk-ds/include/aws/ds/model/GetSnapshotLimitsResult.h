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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/SnapshotLimits.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>GetSnapshotLimits</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimitsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult
  {
  public:
    GetSnapshotLimitsResult();
    GetSnapshotLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSnapshotLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline const SnapshotLimits& GetSnapshotLimits() const{ return m_snapshotLimits; }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline void SetSnapshotLimits(const SnapshotLimits& value) { m_snapshotLimits = value; }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline void SetSnapshotLimits(SnapshotLimits&& value) { m_snapshotLimits = std::move(value); }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline GetSnapshotLimitsResult& WithSnapshotLimits(const SnapshotLimits& value) { SetSnapshotLimits(value); return *this;}

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline GetSnapshotLimitsResult& WithSnapshotLimits(SnapshotLimits&& value) { SetSnapshotLimits(std::move(value)); return *this;}

  private:

    SnapshotLimits m_snapshotLimits;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
