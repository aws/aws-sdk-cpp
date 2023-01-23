/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/Span.h>
#include <aws/accessanalyzer/model/PathElement.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A location in a policy that is represented as a path through the JSON
   * representation and a corresponding span.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Location">AWS
   * API Reference</a></p>
   */
  class Location
  {
  public:
    AWS_ACCESSANALYZER_API Location();
    AWS_ACCESSANALYZER_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline const Aws::Vector<PathElement>& GetPath() const{ return m_path; }

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline void SetPath(const Aws::Vector<PathElement>& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline void SetPath(Aws::Vector<PathElement>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline Location& WithPath(const Aws::Vector<PathElement>& value) { SetPath(value); return *this;}

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline Location& WithPath(Aws::Vector<PathElement>&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline Location& AddPath(const PathElement& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }

    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline Location& AddPath(PathElement&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }


    /**
     * <p>A span in a policy.</p>
     */
    inline const Span& GetSpan() const{ return m_span; }

    /**
     * <p>A span in a policy.</p>
     */
    inline bool SpanHasBeenSet() const { return m_spanHasBeenSet; }

    /**
     * <p>A span in a policy.</p>
     */
    inline void SetSpan(const Span& value) { m_spanHasBeenSet = true; m_span = value; }

    /**
     * <p>A span in a policy.</p>
     */
    inline void SetSpan(Span&& value) { m_spanHasBeenSet = true; m_span = std::move(value); }

    /**
     * <p>A span in a policy.</p>
     */
    inline Location& WithSpan(const Span& value) { SetSpan(value); return *this;}

    /**
     * <p>A span in a policy.</p>
     */
    inline Location& WithSpan(Span&& value) { SetSpan(std::move(value)); return *this;}

  private:

    Aws::Vector<PathElement> m_path;
    bool m_pathHasBeenSet = false;

    Span m_span;
    bool m_spanHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
