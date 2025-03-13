/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/VisibilityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DescribeImagesRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeImagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImages"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names of the public or private images to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    DescribeImagesRequest& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    DescribeImagesRequest& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the public, private, and shared images to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    DescribeImagesRequest& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    DescribeImagesRequest& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of image (public, private, or shared) to describe. </p>
     */
    inline VisibilityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(VisibilityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeImagesRequest& WithType(VisibilityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    VisibilityType m_type{VisibilityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
