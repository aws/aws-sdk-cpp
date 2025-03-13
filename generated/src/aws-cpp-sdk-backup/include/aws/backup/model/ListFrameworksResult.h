/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Framework.h>
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
namespace Backup
{
namespace Model
{
  class ListFrameworksResult
  {
  public:
    AWS_BACKUP_API ListFrameworksResult() = default;
    AWS_BACKUP_API ListFrameworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListFrameworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The frameworks with details for each framework, including the framework name,
     * Amazon Resource Name (ARN), description, number of controls, creation time, and
     * deployment status.</p>
     */
    inline const Aws::Vector<Framework>& GetFrameworks() const { return m_frameworks; }
    template<typename FrameworksT = Aws::Vector<Framework>>
    void SetFrameworks(FrameworksT&& value) { m_frameworksHasBeenSet = true; m_frameworks = std::forward<FrameworksT>(value); }
    template<typename FrameworksT = Aws::Vector<Framework>>
    ListFrameworksResult& WithFrameworks(FrameworksT&& value) { SetFrameworks(std::forward<FrameworksT>(value)); return *this;}
    template<typename FrameworksT = Framework>
    ListFrameworksResult& AddFrameworks(FrameworksT&& value) { m_frameworksHasBeenSet = true; m_frameworks.emplace_back(std::forward<FrameworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFrameworksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFrameworksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Framework> m_frameworks;
    bool m_frameworksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
