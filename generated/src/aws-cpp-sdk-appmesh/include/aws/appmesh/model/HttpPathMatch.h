/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object representing the path to match in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpPathMatch">AWS
   * API Reference</a></p>
   */
  class HttpPathMatch
  {
  public:
    AWS_APPMESH_API HttpPathMatch();
    AWS_APPMESH_API HttpPathMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpPathMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exact path to match on.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }

    /**
     * <p>The exact path to match on.</p>
     */
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }

    /**
     * <p>The exact path to match on.</p>
     */
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }

    /**
     * <p>The exact path to match on.</p>
     */
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }

    /**
     * <p>The exact path to match on.</p>
     */
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }

    /**
     * <p>The exact path to match on.</p>
     */
    inline HttpPathMatch& WithExact(const Aws::String& value) { SetExact(value); return *this;}

    /**
     * <p>The exact path to match on.</p>
     */
    inline HttpPathMatch& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}

    /**
     * <p>The exact path to match on.</p>
     */
    inline HttpPathMatch& WithExact(const char* value) { SetExact(value); return *this;}


    /**
     * <p>The regex used to match the path.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>The regex used to match the path.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>The regex used to match the path.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>The regex used to match the path.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>The regex used to match the path.</p>
     */
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }

    /**
     * <p>The regex used to match the path.</p>
     */
    inline HttpPathMatch& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>The regex used to match the path.</p>
     */
    inline HttpPathMatch& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>The regex used to match the path.</p>
     */
    inline HttpPathMatch& WithRegex(const char* value) { SetRegex(value); return *this;}

  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
