/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTable.h>
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
namespace CleanRooms
{
namespace Model
{
  class UpdateConfiguredTableResult
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableResult();
    AWS_CLEANROOMS_API UpdateConfiguredTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateConfiguredTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated configured table.</p>
     */
    inline const ConfiguredTable& GetConfiguredTable() const{ return m_configuredTable; }

    /**
     * <p>The updated configured table.</p>
     */
    inline void SetConfiguredTable(const ConfiguredTable& value) { m_configuredTable = value; }

    /**
     * <p>The updated configured table.</p>
     */
    inline void SetConfiguredTable(ConfiguredTable&& value) { m_configuredTable = std::move(value); }

    /**
     * <p>The updated configured table.</p>
     */
    inline UpdateConfiguredTableResult& WithConfiguredTable(const ConfiguredTable& value) { SetConfiguredTable(value); return *this;}

    /**
     * <p>The updated configured table.</p>
     */
    inline UpdateConfiguredTableResult& WithConfiguredTable(ConfiguredTable&& value) { SetConfiguredTable(std::move(value)); return *this;}

  private:

    ConfiguredTable m_configuredTable;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
