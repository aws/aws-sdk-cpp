﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicySourceType.h>
#include <aws/iam/model/Position.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains a reference to a <code>Statement</code> element in a policy document
   * that determines the result of the simulation.</p> <p>This data type is used by
   * the <code>MatchedStatements</code> member of the <code> <a>EvaluationResult</a>
   * </code> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Statement">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API Statement
  {
  public:
    Statement();
    Statement(const Aws::Utils::Xml::XmlNode& xmlNode);
    Statement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline const Aws::String& GetSourcePolicyId() const{ return m_sourcePolicyId; }

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline void SetSourcePolicyId(const Aws::String& value) { m_sourcePolicyIdHasBeenSet = true; m_sourcePolicyId = value; }

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline void SetSourcePolicyId(Aws::String&& value) { m_sourcePolicyIdHasBeenSet = true; m_sourcePolicyId = value; }

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline void SetSourcePolicyId(const char* value) { m_sourcePolicyIdHasBeenSet = true; m_sourcePolicyId.assign(value); }

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline Statement& WithSourcePolicyId(const Aws::String& value) { SetSourcePolicyId(value); return *this;}

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline Statement& WithSourcePolicyId(Aws::String&& value) { SetSourcePolicyId(value); return *this;}

    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline Statement& WithSourcePolicyId(const char* value) { SetSourcePolicyId(value); return *this;}

    /**
     * <p>The type of the policy.</p>
     */
    inline const PolicySourceType& GetSourcePolicyType() const{ return m_sourcePolicyType; }

    /**
     * <p>The type of the policy.</p>
     */
    inline void SetSourcePolicyType(const PolicySourceType& value) { m_sourcePolicyTypeHasBeenSet = true; m_sourcePolicyType = value; }

    /**
     * <p>The type of the policy.</p>
     */
    inline void SetSourcePolicyType(PolicySourceType&& value) { m_sourcePolicyTypeHasBeenSet = true; m_sourcePolicyType = value; }

    /**
     * <p>The type of the policy.</p>
     */
    inline Statement& WithSourcePolicyType(const PolicySourceType& value) { SetSourcePolicyType(value); return *this;}

    /**
     * <p>The type of the policy.</p>
     */
    inline Statement& WithSourcePolicyType(PolicySourceType&& value) { SetSourcePolicyType(value); return *this;}

    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline const Position& GetStartPosition() const{ return m_startPosition; }

    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline void SetStartPosition(const Position& value) { m_startPositionHasBeenSet = true; m_startPosition = value; }

    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline void SetStartPosition(Position&& value) { m_startPositionHasBeenSet = true; m_startPosition = value; }

    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline Statement& WithStartPosition(const Position& value) { SetStartPosition(value); return *this;}

    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline Statement& WithStartPosition(Position&& value) { SetStartPosition(value); return *this;}

    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline const Position& GetEndPosition() const{ return m_endPosition; }

    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline void SetEndPosition(const Position& value) { m_endPositionHasBeenSet = true; m_endPosition = value; }

    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline void SetEndPosition(Position&& value) { m_endPositionHasBeenSet = true; m_endPosition = value; }

    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline Statement& WithEndPosition(const Position& value) { SetEndPosition(value); return *this;}

    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline Statement& WithEndPosition(Position&& value) { SetEndPosition(value); return *this;}

  private:
    Aws::String m_sourcePolicyId;
    bool m_sourcePolicyIdHasBeenSet;
    PolicySourceType m_sourcePolicyType;
    bool m_sourcePolicyTypeHasBeenSet;
    Position m_startPosition;
    bool m_startPositionHasBeenSet;
    Position m_endPosition;
    bool m_endPositionHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
