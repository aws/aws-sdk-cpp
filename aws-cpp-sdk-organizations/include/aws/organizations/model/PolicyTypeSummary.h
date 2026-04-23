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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/PolicyType.h>
#include <aws/organizations/model/PolicyTypeStatus.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about a policy type and its status in the associated
   * root.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/PolicyTypeSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API PolicyTypeSummary
  {
  public:
    PolicyTypeSummary();
    PolicyTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    PolicyTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the policy type.</p>
     */
    inline const PolicyType& GetType() const{ return m_type; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The name of the policy type.</p>
     */
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyTypeSummary& WithType(const PolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The name of the policy type.</p>
     */
    inline PolicyTypeSummary& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline const PolicyTypeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline void SetStatus(const PolicyTypeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline void SetStatus(PolicyTypeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline PolicyTypeSummary& WithStatus(const PolicyTypeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the policy type as it relates to the associated root. To attach
     * a policy of the specified type to a root or to an OU or account in that root, it
     * must be available in the organization and enabled for that root.</p>
     */
    inline PolicyTypeSummary& WithStatus(PolicyTypeStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    PolicyType m_type;
    bool m_typeHasBeenSet;

    PolicyTypeStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
