/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ViewDialect.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure specifying the dialect and dialect version used by the query
   * engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SupportedDialect">AWS
   * API Reference</a></p>
   */
  class SupportedDialect
  {
  public:
    AWS_GLUE_API SupportedDialect() = default;
    AWS_GLUE_API SupportedDialect(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SupportedDialect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dialect of the query engine.</p>
     */
    inline ViewDialect GetDialect() const { return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(ViewDialect value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline SupportedDialect& WithDialect(ViewDialect value) { SetDialect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dialect of the query engine. For example, 3.0.0.</p>
     */
    inline const Aws::String& GetDialectVersion() const { return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    template<typename DialectVersionT = Aws::String>
    void SetDialectVersion(DialectVersionT&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::forward<DialectVersionT>(value); }
    template<typename DialectVersionT = Aws::String>
    SupportedDialect& WithDialectVersion(DialectVersionT&& value) { SetDialectVersion(std::forward<DialectVersionT>(value)); return *this;}
    ///@}
  private:

    ViewDialect m_dialect{ViewDialect::NOT_SET};
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
