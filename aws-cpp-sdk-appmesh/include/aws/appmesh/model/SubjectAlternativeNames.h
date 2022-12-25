/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/SubjectAlternativeNameMatchers.h>
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
   * <p>An object that represents the subject alternative names secured by the
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/SubjectAlternativeNames">AWS
   * API Reference</a></p>
   */
  class SubjectAlternativeNames
  {
  public:
    AWS_APPMESH_API SubjectAlternativeNames();
    AWS_APPMESH_API SubjectAlternativeNames(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API SubjectAlternativeNames& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline const SubjectAlternativeNameMatchers& GetMatch() const{ return m_match; }

    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline void SetMatch(const SubjectAlternativeNameMatchers& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline void SetMatch(SubjectAlternativeNameMatchers&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline SubjectAlternativeNames& WithMatch(const SubjectAlternativeNameMatchers& value) { SetMatch(value); return *this;}

    /**
     * <p>An object that represents the criteria for determining a SANs match.</p>
     */
    inline SubjectAlternativeNames& WithMatch(SubjectAlternativeNameMatchers&& value) { SetMatch(std::move(value)); return *this;}

  private:

    SubjectAlternativeNameMatchers m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
