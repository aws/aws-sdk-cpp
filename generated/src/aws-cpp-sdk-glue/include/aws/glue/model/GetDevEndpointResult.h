/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DevEndpoint.h>
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
namespace Glue
{
namespace Model
{
  class GetDevEndpointResult
  {
  public:
    AWS_GLUE_API GetDevEndpointResult();
    AWS_GLUE_API GetDevEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDevEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline const DevEndpoint& GetDevEndpoint() const{ return m_devEndpoint; }

    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline void SetDevEndpoint(const DevEndpoint& value) { m_devEndpoint = value; }

    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline void SetDevEndpoint(DevEndpoint&& value) { m_devEndpoint = std::move(value); }

    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline GetDevEndpointResult& WithDevEndpoint(const DevEndpoint& value) { SetDevEndpoint(value); return *this;}

    /**
     * <p>A <code>DevEndpoint</code> definition.</p>
     */
    inline GetDevEndpointResult& WithDevEndpoint(DevEndpoint&& value) { SetDevEndpoint(std::move(value)); return *this;}

  private:

    DevEndpoint m_devEndpoint;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
