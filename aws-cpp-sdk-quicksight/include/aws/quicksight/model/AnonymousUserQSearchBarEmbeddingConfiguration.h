/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The settings that you want to use with the Q search bar.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserQSearchBarEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class AnonymousUserQSearchBarEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserQSearchBarEmbeddingConfiguration();
    AWS_QUICKSIGHT_API AnonymousUserQSearchBarEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserQSearchBarEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline const Aws::String& GetInitialTopicId() const{ return m_initialTopicId; }

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline bool InitialTopicIdHasBeenSet() const { return m_initialTopicIdHasBeenSet; }

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialTopicId(const Aws::String& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = value; }

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialTopicId(Aws::String&& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = std::move(value); }

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialTopicId(const char* value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId.assign(value); }

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(const Aws::String& value) { SetInitialTopicId(value); return *this;}

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(Aws::String&& value) { SetInitialTopicId(std::move(value)); return *this;}

    /**
     * <p>The QuickSight Q topic ID of the topic that you want the anonymous user to
     * see first. This ID is included in the output URL. When the URL in response is
     * accessed, Amazon QuickSight renders the Q search bar with this topic
     * pre-selected.</p> <p>The Amazon Resource Name (ARN) of this Q topic must be
     * included in the <code>AuthorizedResourceArns</code> parameter. Otherwise, the
     * request will fail with <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(const char* value) { SetInitialTopicId(value); return *this;}

  private:

    Aws::String m_initialTopicId;
    bool m_initialTopicIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
