/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceServer.h>
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
namespace drs
{
namespace Model
{
  class StartReplicationResult
  {
  public:
    AWS_DRS_API StartReplicationResult();
    AWS_DRS_API StartReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StartReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline const SourceServer& GetSourceServer() const{ return m_sourceServer; }

    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline void SetSourceServer(const SourceServer& value) { m_sourceServer = value; }

    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline void SetSourceServer(SourceServer&& value) { m_sourceServer = std::move(value); }

    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline StartReplicationResult& WithSourceServer(const SourceServer& value) { SetSourceServer(value); return *this;}

    /**
     * <p>The Source Server that this action was targeted on.</p>
     */
    inline StartReplicationResult& WithSourceServer(SourceServer&& value) { SetSourceServer(std::move(value)); return *this;}

  private:

    SourceServer m_sourceServer;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
