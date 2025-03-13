/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the methods by which a subject alternative name on
   * a peer Transport Layer Security (TLS) certificate can be matched.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/SubjectAlternativeNameMatchers">AWS
   * API Reference</a></p>
   */
  class SubjectAlternativeNameMatchers
  {
  public:
    AWS_APPMESH_API SubjectAlternativeNameMatchers() = default;
    AWS_APPMESH_API SubjectAlternativeNameMatchers(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API SubjectAlternativeNameMatchers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values sent must match the specified values exactly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExact() const { return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    template<typename ExactT = Aws::Vector<Aws::String>>
    void SetExact(ExactT&& value) { m_exactHasBeenSet = true; m_exact = std::forward<ExactT>(value); }
    template<typename ExactT = Aws::Vector<Aws::String>>
    SubjectAlternativeNameMatchers& WithExact(ExactT&& value) { SetExact(std::forward<ExactT>(value)); return *this;}
    template<typename ExactT = Aws::String>
    SubjectAlternativeNameMatchers& AddExact(ExactT&& value) { m_exactHasBeenSet = true; m_exact.emplace_back(std::forward<ExactT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_exact;
    bool m_exactHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
