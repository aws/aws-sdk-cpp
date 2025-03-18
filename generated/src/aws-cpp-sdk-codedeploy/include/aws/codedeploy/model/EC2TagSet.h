/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about groups of Amazon EC2 instance tags.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/EC2TagSet">AWS
   * API Reference</a></p>
   */
  class EC2TagSet
  {
  public:
    AWS_CODEDEPLOY_API EC2TagSet() = default;
    AWS_CODEDEPLOY_API EC2TagSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API EC2TagSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list that contains other lists of Amazon EC2 instance tag groups. For an
     * instance to be included in the deployment group, it must be identified by all of
     * the tag groups in the list.</p>
     */
    inline const Aws::Vector<Aws::Vector<EC2TagFilter>>& GetEc2TagSetList() const { return m_ec2TagSetList; }
    inline bool Ec2TagSetListHasBeenSet() const { return m_ec2TagSetListHasBeenSet; }
    template<typename Ec2TagSetListT = Aws::Vector<Aws::Vector<EC2TagFilter>>>
    void SetEc2TagSetList(Ec2TagSetListT&& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList = std::forward<Ec2TagSetListT>(value); }
    template<typename Ec2TagSetListT = Aws::Vector<Aws::Vector<EC2TagFilter>>>
    EC2TagSet& WithEc2TagSetList(Ec2TagSetListT&& value) { SetEc2TagSetList(std::forward<Ec2TagSetListT>(value)); return *this;}
    template<typename Ec2TagSetListT = Aws::Vector<EC2TagFilter>>
    EC2TagSet& AddEc2TagSetList(Ec2TagSetListT&& value) { m_ec2TagSetListHasBeenSet = true; m_ec2TagSetList.emplace_back(std::forward<Ec2TagSetListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<EC2TagFilter>> m_ec2TagSetList;
    bool m_ec2TagSetListHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
