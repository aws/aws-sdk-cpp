/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>A filter object, used to optionally filter results from calls to the
   * <code>ListEntities</code> and <code>ListChangeSets</code> actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_MARKETPLACECATALOG_API Filter();
    AWS_MARKETPLACECATALOG_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>For <code>ListEntities</code>, the supported value for this is an
     * <code>EntityId</code>.</p> <p>For <code>ListChangeSets</code>, the supported
     * values are as follows:</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline Filter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline Filter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline Filter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline Filter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p> <code>ListEntities</code> - This is a list of unique
     * <code>EntityId</code>s.</p> <p> <code>ListChangeSets</code> - The supported
     * filter names and associated <code>ValueList</code>s is as follows:</p> <ul> <li>
     * <p> <code>ChangeSetName</code> - The supported <code>ValueList</code> is a list
     * of non-unique <code>ChangeSetName</code>s. These are defined when you call the
     * <code>StartChangeSet</code> action.</p> </li> <li> <p> <code>Status</code> - The
     * supported <code>ValueList</code> is a list of statuses for all change set
     * requests.</p> </li> <li> <p> <code>EntityId</code> - The supported
     * <code>ValueList</code> is a list of unique <code>EntityId</code>s.</p> </li>
     * <li> <p> <code>BeforeStartTime</code> - The supported <code>ValueList</code> is
     * a list of all change sets that started before the filter value.</p> </li> <li>
     * <p> <code>AfterStartTime</code> - The supported <code>ValueList</code> is a list
     * of all change sets that started after the filter value.</p> </li> <li> <p>
     * <code>BeforeEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended before the filter value.</p> </li> <li> <p>
     * <code>AfterEndTime</code> - The supported <code>ValueList</code> is a list of
     * all change sets that ended after the filter value.</p> </li> </ul>
     */
    inline Filter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
