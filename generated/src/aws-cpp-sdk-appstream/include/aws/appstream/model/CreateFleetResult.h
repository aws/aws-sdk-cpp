/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Fleet.h>
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
namespace AppStream
{
namespace Model
{
  class CreateFleetResult
  {
  public:
    AWS_APPSTREAM_API CreateFleetResult();
    AWS_APPSTREAM_API CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the fleet.</p>
     */
    inline const Fleet& GetFleet() const{ return m_fleet; }

    /**
     * <p>Information about the fleet.</p>
     */
    inline void SetFleet(const Fleet& value) { m_fleet = value; }

    /**
     * <p>Information about the fleet.</p>
     */
    inline void SetFleet(Fleet&& value) { m_fleet = std::move(value); }

    /**
     * <p>Information about the fleet.</p>
     */
    inline CreateFleetResult& WithFleet(const Fleet& value) { SetFleet(value); return *this;}

    /**
     * <p>Information about the fleet.</p>
     */
    inline CreateFleetResult& WithFleet(Fleet&& value) { SetFleet(std::move(value)); return *this;}

  private:

    Fleet m_fleet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
