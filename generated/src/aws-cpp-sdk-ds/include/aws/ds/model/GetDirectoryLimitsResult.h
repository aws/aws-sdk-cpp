/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDirectoryLimitsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult();
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline const DirectoryLimits& GetDirectoryLimits() const{ return m_directoryLimits; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline void SetDirectoryLimits(const DirectoryLimits& value) { m_directoryLimits = value; }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline void SetDirectoryLimits(DirectoryLimits&& value) { m_directoryLimits = std::move(value); }

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(const DirectoryLimits& value) { SetDirectoryLimits(value); return *this;}

    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline GetDirectoryLimitsResult& WithDirectoryLimits(DirectoryLimits&& value) { SetDirectoryLimits(std::move(value)); return *this;}

  private:

    DirectoryLimits m_directoryLimits;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
