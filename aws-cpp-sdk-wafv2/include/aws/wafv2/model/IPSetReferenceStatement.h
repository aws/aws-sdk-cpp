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
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>A rule statement used to detect web
   * requests coming from particular IP addresses or address ranges. To use this,
   * create an <a>IPSet</a> that specifies the addresses you want to detect, then use
   * the ARN of that set in this statement. To create an IP set, see
   * <a>CreateIPSet</a>.</p> <p>Each IP set rule statement references an IP set. You
   * create and maintain the set independent of your rules. This allows you to use
   * the single set in multiple rules. When you update the referenced set, AWS WAF
   * automatically updates all rules that reference it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/IPSetReferenceStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API IPSetReferenceStatement
  {
  public:
    IPSetReferenceStatement();
    IPSetReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    IPSetReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a>IPSet</a> that this statement
     * references.</p>
     */
    inline IPSetReferenceStatement& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
