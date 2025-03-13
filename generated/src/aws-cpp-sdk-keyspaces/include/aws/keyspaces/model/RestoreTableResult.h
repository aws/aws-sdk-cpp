/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class RestoreTableResult
  {
  public:
    AWS_KEYSPACES_API RestoreTableResult() = default;
    AWS_KEYSPACES_API RestoreTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API RestoreTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the restored table.</p>
     */
    inline const Aws::String& GetRestoredTableARN() const { return m_restoredTableARN; }
    template<typename RestoredTableARNT = Aws::String>
    void SetRestoredTableARN(RestoredTableARNT&& value) { m_restoredTableARNHasBeenSet = true; m_restoredTableARN = std::forward<RestoredTableARNT>(value); }
    template<typename RestoredTableARNT = Aws::String>
    RestoreTableResult& WithRestoredTableARN(RestoredTableARNT&& value) { SetRestoredTableARN(std::forward<RestoredTableARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoredTableARN;
    bool m_restoredTableARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
