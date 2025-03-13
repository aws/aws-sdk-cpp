/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ApplicationFleetAssociation.h>
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
  class DescribeApplicationFleetAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult() = default;
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline const Aws::Vector<ApplicationFleetAssociation>& GetApplicationFleetAssociations() const { return m_applicationFleetAssociations; }
    template<typename ApplicationFleetAssociationsT = Aws::Vector<ApplicationFleetAssociation>>
    void SetApplicationFleetAssociations(ApplicationFleetAssociationsT&& value) { m_applicationFleetAssociationsHasBeenSet = true; m_applicationFleetAssociations = std::forward<ApplicationFleetAssociationsT>(value); }
    template<typename ApplicationFleetAssociationsT = Aws::Vector<ApplicationFleetAssociation>>
    DescribeApplicationFleetAssociationsResult& WithApplicationFleetAssociations(ApplicationFleetAssociationsT&& value) { SetApplicationFleetAssociations(std::forward<ApplicationFleetAssociationsT>(value)); return *this;}
    template<typename ApplicationFleetAssociationsT = ApplicationFleetAssociation>
    DescribeApplicationFleetAssociationsResult& AddApplicationFleetAssociations(ApplicationFleetAssociationsT&& value) { m_applicationFleetAssociationsHasBeenSet = true; m_applicationFleetAssociations.emplace_back(std::forward<ApplicationFleetAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeApplicationFleetAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationFleetAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationFleetAssociation> m_applicationFleetAssociations;
    bool m_applicationFleetAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
