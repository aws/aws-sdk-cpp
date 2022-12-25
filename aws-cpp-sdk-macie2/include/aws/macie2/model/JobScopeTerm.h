/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SimpleScopeTerm.h>
#include <aws/macie2/model/TagScopeTerm.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a property- or tag-based condition that defines criteria for
   * including or excluding S3 objects from a classification job. A JobScopeTerm
   * object can contain only one simpleScopeTerm object or one tagScopeTerm
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobScopeTerm">AWS
   * API Reference</a></p>
   */
  class JobScopeTerm
  {
  public:
    AWS_MACIE2_API JobScopeTerm();
    AWS_MACIE2_API JobScopeTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobScopeTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline const SimpleScopeTerm& GetSimpleScopeTerm() const{ return m_simpleScopeTerm; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline bool SimpleScopeTermHasBeenSet() const { return m_simpleScopeTermHasBeenSet; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline void SetSimpleScopeTerm(const SimpleScopeTerm& value) { m_simpleScopeTermHasBeenSet = true; m_simpleScopeTerm = value; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline void SetSimpleScopeTerm(SimpleScopeTerm&& value) { m_simpleScopeTermHasBeenSet = true; m_simpleScopeTerm = std::move(value); }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline JobScopeTerm& WithSimpleScopeTerm(const SimpleScopeTerm& value) { SetSimpleScopeTerm(value); return *this;}

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding objects from the job.</p>
     */
    inline JobScopeTerm& WithSimpleScopeTerm(SimpleScopeTerm&& value) { SetSimpleScopeTerm(std::move(value)); return *this;}


    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline const TagScopeTerm& GetTagScopeTerm() const{ return m_tagScopeTerm; }

    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline bool TagScopeTermHasBeenSet() const { return m_tagScopeTermHasBeenSet; }

    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline void SetTagScopeTerm(const TagScopeTerm& value) { m_tagScopeTermHasBeenSet = true; m_tagScopeTerm = value; }

    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline void SetTagScopeTerm(TagScopeTerm&& value) { m_tagScopeTermHasBeenSet = true; m_tagScopeTerm = std::move(value); }

    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline JobScopeTerm& WithTagScopeTerm(const TagScopeTerm& value) { SetTagScopeTerm(value); return *this;}

    /**
     * <p>A tag-based condition that defines the operator and tag keys or tag key and
     * value pairs for including or excluding objects from the job.</p>
     */
    inline JobScopeTerm& WithTagScopeTerm(TagScopeTerm&& value) { SetTagScopeTerm(std::move(value)); return *this;}

  private:

    SimpleScopeTerm m_simpleScopeTerm;
    bool m_simpleScopeTermHasBeenSet = false;

    TagScopeTerm m_tagScopeTerm;
    bool m_tagScopeTermHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
