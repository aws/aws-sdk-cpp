/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTable.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetConfiguredTableResult
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredTableResult();
    AWS_CLEANROOMS_API GetConfiguredTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetConfiguredTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved configured table.</p>
     */
    inline const ConfiguredTable& GetConfiguredTable() const{ return m_configuredTable; }

    /**
     * <p>The retrieved configured table.</p>
     */
    inline void SetConfiguredTable(const ConfiguredTable& value) { m_configuredTable = value; }

    /**
     * <p>The retrieved configured table.</p>
     */
    inline void SetConfiguredTable(ConfiguredTable&& value) { m_configuredTable = std::move(value); }

    /**
     * <p>The retrieved configured table.</p>
     */
    inline GetConfiguredTableResult& WithConfiguredTable(const ConfiguredTable& value) { SetConfiguredTable(value); return *this;}

    /**
     * <p>The retrieved configured table.</p>
     */
    inline GetConfiguredTableResult& WithConfiguredTable(ConfiguredTable&& value) { SetConfiguredTable(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfiguredTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfiguredTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfiguredTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredTable m_configuredTable;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
