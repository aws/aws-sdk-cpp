/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/EC2TagFilter.h>
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
   * <p>Information about groups of EC2 instance tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/EC2TagSet">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API EC2TagSet
  {
  public:
    EC2TagSet();
    EC2TagSet(Aws::Utils::Json::JsonView jsonValue);
    EC2TagSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline const Aws::Vector<Aws::Vector<EC2TagFilter>>& GetEc2TagSetList() const{ return m_ec2TagSetList; }

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline bool Ec2TagSetListHasBeenSet() const { return m_ec2TagSetListHasBeenSet; }

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline void SetEc2TagSetList(const Aws::Vector<Aws::Vector<EC2TagFilter>>& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList = value; }

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline void SetEc2TagSetList(Aws::Vector<Aws::Vector<EC2TagFilter>>&& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList = std::move(value); }

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline EC2TagSet& WithEc2TagSetList(const Aws::Vector<Aws::Vector<EC2TagFilter>>& value) { SetEc2TagSetList(value); return *this;}

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline EC2TagSet& WithEc2TagSetList(Aws::Vector<Aws::Vector<EC2TagFilter>>&& value) { SetEc2TagSetList(std::move(value)); return *this;}

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline EC2TagSet& AddEc2TagSetList(const Aws::Vector<EC2TagFilter>& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList.push_back(value); return *this; }

    /**
     * <p>A list that contains other lists of EC2 instance tag groups. For an instance
     * to be included in the deployment group, it must be identified by all of the tag
     * groups in the list.</p>
     */
    inline EC2TagSet& AddEc2TagSetList(Aws::Vector<EC2TagFilter>&& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<EC2TagFilter>> m_ec2TagSetList;
    bool m_ec2TagSetListHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
