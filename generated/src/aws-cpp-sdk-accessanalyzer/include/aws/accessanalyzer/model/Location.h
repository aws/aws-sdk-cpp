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
    AWS_ACCESSANALYZER_API Location() = default;
    AWS_ACCESSANALYZER_API Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A path in a policy, represented as a sequence of path elements.</p>
     */
    inline const Aws::Vector<PathElement>& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::Vector<PathElement>>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::Vector<PathElement>>
    Location& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    template<typename PathT = PathElement>
    Location& AddPath(PathT&& value) { m_pathHasBeenSet = true; m_path.emplace_back(std::forward<PathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A span in a policy.</p>
     */
    inline const Span& GetSpan() const { return m_span; }
    inline bool SpanHasBeenSet() const { return m_spanHasBeenSet; }
    template<typename SpanT = Span>
    void SetSpan(SpanT&& value) { m_spanHasBeenSet = true; m_span = std::forward<SpanT>(value); }
    template<typename SpanT = Span>
    Location& WithSpan(SpanT&& value) { SetSpan(std::forward<SpanT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PathElement> m_path;
    bool m_pathHasBeenSet = false;

    Span m_span;
    bool m_spanHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
