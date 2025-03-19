/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes event topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeEventTopicsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeEventTopicsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventTopics"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeEventTopicsRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicNames() const { return m_topicNames; }
    inline bool TopicNamesHasBeenSet() const { return m_topicNamesHasBeenSet; }
    template<typename TopicNamesT = Aws::Vector<Aws::String>>
    void SetTopicNames(TopicNamesT&& value) { m_topicNamesHasBeenSet = true; m_topicNames = std::forward<TopicNamesT>(value); }
    template<typename TopicNamesT = Aws::Vector<Aws::String>>
    DescribeEventTopicsRequest& WithTopicNames(TopicNamesT&& value) { SetTopicNames(std::forward<TopicNamesT>(value)); return *this;}
    template<typename TopicNamesT = Aws::String>
    DescribeEventTopicsRequest& AddTopicNames(TopicNamesT&& value) { m_topicNamesHasBeenSet = true; m_topicNames.emplace_back(std::forward<TopicNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicNames;
    bool m_topicNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
