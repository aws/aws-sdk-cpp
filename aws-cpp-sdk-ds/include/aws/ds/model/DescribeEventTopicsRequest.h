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
    AWS_DIRECTORYSERVICE_API DescribeEventTopicsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventTopics"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline DescribeEventTopicsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline DescribeEventTopicsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID for which to get the list of associated Amazon SNS topics.
     * If this member is null, associations for all Directory IDs are returned.</p>
     */
    inline DescribeEventTopicsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopicNames() const{ return m_topicNames; }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline bool TopicNamesHasBeenSet() const { return m_topicNamesHasBeenSet; }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline void SetTopicNames(const Aws::Vector<Aws::String>& value) { m_topicNamesHasBeenSet = true; m_topicNames = value; }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline void SetTopicNames(Aws::Vector<Aws::String>&& value) { m_topicNamesHasBeenSet = true; m_topicNames = std::move(value); }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeEventTopicsRequest& WithTopicNames(const Aws::Vector<Aws::String>& value) { SetTopicNames(value); return *this;}

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeEventTopicsRequest& WithTopicNames(Aws::Vector<Aws::String>&& value) { SetTopicNames(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeEventTopicsRequest& AddTopicNames(const Aws::String& value) { m_topicNamesHasBeenSet = true; m_topicNames.push_back(value); return *this; }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeEventTopicsRequest& AddTopicNames(Aws::String&& value) { m_topicNamesHasBeenSet = true; m_topicNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon SNS topic names for which to obtain the information. If this
     * member is null, all associations for the specified Directory ID are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeEventTopicsRequest& AddTopicNames(const char* value) { m_topicNamesHasBeenSet = true; m_topicNames.push_back(value); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_topicNames;
    bool m_topicNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
