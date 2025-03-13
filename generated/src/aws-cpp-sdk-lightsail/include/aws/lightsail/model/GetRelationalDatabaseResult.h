/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabase.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the specified database.</p>
     */
    inline const RelationalDatabase& GetRelationalDatabase() const { return m_relationalDatabase; }
    template<typename RelationalDatabaseT = RelationalDatabase>
    void SetRelationalDatabase(RelationalDatabaseT&& value) { m_relationalDatabaseHasBeenSet = true; m_relationalDatabase = std::forward<RelationalDatabaseT>(value); }
    template<typename RelationalDatabaseT = RelationalDatabase>
    GetRelationalDatabaseResult& WithRelationalDatabase(RelationalDatabaseT&& value) { SetRelationalDatabase(std::forward<RelationalDatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RelationalDatabase m_relationalDatabase;
    bool m_relationalDatabaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
