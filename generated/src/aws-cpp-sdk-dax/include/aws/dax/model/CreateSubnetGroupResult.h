/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/SubnetGroup.h>
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
namespace DAX
{
namespace Model
{
  class CreateSubnetGroupResult
  {
  public:
    AWS_DAX_API CreateSubnetGroupResult();
    AWS_DAX_API CreateSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API CreateSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const{ return m_subnetGroup; }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline void SetSubnetGroup(const SubnetGroup& value) { m_subnetGroup = value; }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline void SetSubnetGroup(SubnetGroup&& value) { m_subnetGroup = std::move(value); }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(const SubnetGroup& value) { SetSubnetGroup(value); return *this;}

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(SubnetGroup&& value) { SetSubnetGroup(std::move(value)); return *this;}

  private:

    SubnetGroup m_subnetGroup;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
