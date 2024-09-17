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
    AWS_APPMESH_API SubjectAlternativeNameMatchers();
    AWS_APPMESH_API SubjectAlternativeNameMatchers(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API SubjectAlternativeNameMatchers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The values sent must match the specified values exactly.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExact() const{ return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    inline void SetExact(const Aws::Vector<Aws::String>& value) { m_exactHasBeenSet = true; m_exact = value; }
    inline void SetExact(Aws::Vector<Aws::String>&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }
    inline SubjectAlternativeNameMatchers& WithExact(const Aws::Vector<Aws::String>& value) { SetExact(value); return *this;}
    inline SubjectAlternativeNameMatchers& WithExact(Aws::Vector<Aws::String>&& value) { SetExact(std::move(value)); return *this;}
    inline SubjectAlternativeNameMatchers& AddExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact.push_back(value); return *this; }
    inline SubjectAlternativeNameMatchers& AddExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact.push_back(std::move(value)); return *this; }
    inline SubjectAlternativeNameMatchers& AddExact(const char* value) { m_exactHasBeenSet = true; m_exact.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_exact;
    bool m_exactHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
