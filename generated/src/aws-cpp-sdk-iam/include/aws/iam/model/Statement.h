/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/PolicySourceType.h>
#include <aws/iam/model/Position.h>
#include <utility>

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
   * the <code>MatchedStatements</code> member of the <code> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_EvaluationResult.html">EvaluationResult</a>
   * </code> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Statement">AWS API
   * Reference</a></p>
   */
  class Statement
  {
  public:
    AWS_IAM_API Statement() = default;
    AWS_IAM_API Statement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API Statement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the policy that was provided as an input.</p>
     */
    inline const Aws::String& GetSourcePolicyId() const { return m_sourcePolicyId; }
    inline bool SourcePolicyIdHasBeenSet() const { return m_sourcePolicyIdHasBeenSet; }
    template<typename SourcePolicyIdT = Aws::String>
    void SetSourcePolicyId(SourcePolicyIdT&& value) { m_sourcePolicyIdHasBeenSet = true; m_sourcePolicyId = std::forward<SourcePolicyIdT>(value); }
    template<typename SourcePolicyIdT = Aws::String>
    Statement& WithSourcePolicyId(SourcePolicyIdT&& value) { SetSourcePolicyId(std::forward<SourcePolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the policy.</p>
     */
    inline PolicySourceType GetSourcePolicyType() const { return m_sourcePolicyType; }
    inline bool SourcePolicyTypeHasBeenSet() const { return m_sourcePolicyTypeHasBeenSet; }
    inline void SetSourcePolicyType(PolicySourceType value) { m_sourcePolicyTypeHasBeenSet = true; m_sourcePolicyType = value; }
    inline Statement& WithSourcePolicyType(PolicySourceType value) { SetSourcePolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row and column of the beginning of the <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline const Position& GetStartPosition() const { return m_startPosition; }
    inline bool StartPositionHasBeenSet() const { return m_startPositionHasBeenSet; }
    template<typename StartPositionT = Position>
    void SetStartPosition(StartPositionT&& value) { m_startPositionHasBeenSet = true; m_startPosition = std::forward<StartPositionT>(value); }
    template<typename StartPositionT = Position>
    Statement& WithStartPosition(StartPositionT&& value) { SetStartPosition(std::forward<StartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row and column of the end of a <code>Statement</code> in an IAM
     * policy.</p>
     */
    inline const Position& GetEndPosition() const { return m_endPosition; }
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }
    template<typename EndPositionT = Position>
    void SetEndPosition(EndPositionT&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::forward<EndPositionT>(value); }
    template<typename EndPositionT = Position>
    Statement& WithEndPosition(EndPositionT&& value) { SetEndPosition(std::forward<EndPositionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourcePolicyId;
    bool m_sourcePolicyIdHasBeenSet = false;

    PolicySourceType m_sourcePolicyType{PolicySourceType::NOT_SET};
    bool m_sourcePolicyTypeHasBeenSet = false;

    Position m_startPosition;
    bool m_startPositionHasBeenSet = false;

    Position m_endPosition;
    bool m_endPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
