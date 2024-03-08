/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
namespace kendra
{
namespace Model
{

  /**
   * <p>Specifies the configuration information needed to customize how collapsed
   * search result groups expand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExpandConfiguration">AWS
   * API Reference</a></p>
   */
  class ExpandConfiguration
  {
  public:
    AWS_KENDRA_API ExpandConfiguration();
    AWS_KENDRA_API ExpandConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExpandConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of collapsed search result groups to expand. If you set this value
     * to 10, for example, only the first 10 out of 100 result groups will have expand
     * functionality. </p>
     */
    inline int GetMaxResultItemsToExpand() const{ return m_maxResultItemsToExpand; }

    /**
     * <p>The number of collapsed search result groups to expand. If you set this value
     * to 10, for example, only the first 10 out of 100 result groups will have expand
     * functionality. </p>
     */
    inline bool MaxResultItemsToExpandHasBeenSet() const { return m_maxResultItemsToExpandHasBeenSet; }

    /**
     * <p>The number of collapsed search result groups to expand. If you set this value
     * to 10, for example, only the first 10 out of 100 result groups will have expand
     * functionality. </p>
     */
    inline void SetMaxResultItemsToExpand(int value) { m_maxResultItemsToExpandHasBeenSet = true; m_maxResultItemsToExpand = value; }

    /**
     * <p>The number of collapsed search result groups to expand. If you set this value
     * to 10, for example, only the first 10 out of 100 result groups will have expand
     * functionality. </p>
     */
    inline ExpandConfiguration& WithMaxResultItemsToExpand(int value) { SetMaxResultItemsToExpand(value); return *this;}


    /**
     * <p>The number of expanded results to show per collapsed primary document. For
     * instance, if you set this value to 3, then at most 3 results per collapsed group
     * will be displayed.</p>
     */
    inline int GetMaxExpandedResultsPerItem() const{ return m_maxExpandedResultsPerItem; }

    /**
     * <p>The number of expanded results to show per collapsed primary document. For
     * instance, if you set this value to 3, then at most 3 results per collapsed group
     * will be displayed.</p>
     */
    inline bool MaxExpandedResultsPerItemHasBeenSet() const { return m_maxExpandedResultsPerItemHasBeenSet; }

    /**
     * <p>The number of expanded results to show per collapsed primary document. For
     * instance, if you set this value to 3, then at most 3 results per collapsed group
     * will be displayed.</p>
     */
    inline void SetMaxExpandedResultsPerItem(int value) { m_maxExpandedResultsPerItemHasBeenSet = true; m_maxExpandedResultsPerItem = value; }

    /**
     * <p>The number of expanded results to show per collapsed primary document. For
     * instance, if you set this value to 3, then at most 3 results per collapsed group
     * will be displayed.</p>
     */
    inline ExpandConfiguration& WithMaxExpandedResultsPerItem(int value) { SetMaxExpandedResultsPerItem(value); return *this;}

  private:

    int m_maxResultItemsToExpand;
    bool m_maxResultItemsToExpandHasBeenSet = false;

    int m_maxExpandedResultsPerItem;
    bool m_maxExpandedResultsPerItemHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
