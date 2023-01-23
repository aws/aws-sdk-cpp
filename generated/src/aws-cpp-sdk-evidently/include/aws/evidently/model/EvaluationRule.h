/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains the information about an evaluation rule for this
   * feature, if it is used in a launch or experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/EvaluationRule">AWS
   * API Reference</a></p>
   */
  class EvaluationRule
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRule();
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API EvaluationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline EvaluationRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline EvaluationRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment or launch.</p>
     */
    inline EvaluationRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline EvaluationRule& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline EvaluationRule& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>This value is <code>aws.evidently.splits</code> if this is an evaluation rule
     * for a launch, and it is <code>aws.evidently.onlineab</code> if this is an
     * evaluation rule for an experiment.</p>
     */
    inline EvaluationRule& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
