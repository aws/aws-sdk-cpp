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
#include <aws/ds/model/DirectoryLimits.h>
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
   * <p>Contains the results of the <a>GetDirectoryLimits</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimitsResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult
  {
  public:
    GetDirectoryLimitsResult();
    GetDirectoryLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDirectoryLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current region.</p>
     */
    inline const DirectoryLimits& GetDirectoryLimits() const{ return m_directoryLimits; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current region.</p>
     */
    inline void SetDirectoryLimits(const DirectoryLimits& value) { m_directoryLimits = value; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current region.</p>
     */
    inline void SetDirectoryLimits(DirectoryLimits&& value) { m_directoryLimits = std::move(value); }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(const DirectoryLimits& value) { SetDirectoryLimits(value); return *this;}

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(DirectoryLimits&& value) { SetDirectoryLimits(std::move(value)); return *this;}

  private:

    DirectoryLimits m_directoryLimits;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
