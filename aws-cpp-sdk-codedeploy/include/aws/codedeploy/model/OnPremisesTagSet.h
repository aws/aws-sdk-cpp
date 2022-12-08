/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TagFilter.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about groups of on-premises instance tags.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/OnPremisesTagSet">AWS
   * API Reference</a></p>
   */
  class OnPremisesTagSet
  {
  public:
    AWS_CODEDEPLOY_API OnPremisesTagSet();
    AWS_CODEDEPLOY_API OnPremisesTagSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API OnPremisesTagSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline const Aws::Vector<Aws::Vector<TagFilter>>& GetOnPremisesTagSetList() const{ return m_onPremisesTagSetList; }

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline bool OnPremisesTagSetListHasBeenSet() const { return m_onPremisesTagSetListHasBeenSet; }

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline void SetOnPremisesTagSetList(const Aws::Vector<Aws::Vector<TagFilter>>& value) { m_onPremisesTagSetListHasBeenSet = true; m_onPremisesTagSetList = value; }

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline void SetOnPremisesTagSetList(Aws::Vector<Aws::Vector<TagFilter>>&& value) { m_onPremisesTagSetListHasBeenSet = true; m_onPremisesTagSetList = std::move(value); }

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline OnPremisesTagSet& WithOnPremisesTagSetList(const Aws::Vector<Aws::Vector<TagFilter>>& value) { SetOnPremisesTagSetList(value); return *this;}

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline OnPremisesTagSet& WithOnPremisesTagSetList(Aws::Vector<Aws::Vector<TagFilter>>&& value) { SetOnPremisesTagSetList(std::move(value)); return *this;}

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline OnPremisesTagSet& AddOnPremisesTagSetList(const Aws::Vector<TagFilter>& value) { m_onPremisesTagSetListHasBeenSet = true; m_onPremisesTagSetList.push_back(value); return *this; }

    /**
     * <p>A list that contains other lists of on-premises instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline OnPremisesTagSet& AddOnPremisesTagSetList(Aws::Vector<TagFilter>&& value) { m_onPremisesTagSetListHasBeenSet = true; m_onPremisesTagSetList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<TagFilter>> m_onPremisesTagSetList;
    bool m_onPremisesTagSetListHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
