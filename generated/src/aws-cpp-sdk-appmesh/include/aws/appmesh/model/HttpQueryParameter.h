/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/QueryParameterMatch.h>
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
   * <p>An object that represents the query parameter in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpQueryParameter">AWS
   * API Reference</a></p>
   */
  class HttpQueryParameter
  {
  public:
    AWS_APPMESH_API HttpQueryParameter();
    AWS_APPMESH_API HttpQueryParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpQueryParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query parameter to match on.</p>
     */
    inline const QueryParameterMatch& GetMatch() const{ return m_match; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline void SetMatch(const QueryParameterMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline void SetMatch(QueryParameterMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpQueryParameter& WithMatch(const QueryParameterMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The query parameter to match on.</p>
     */
    inline HttpQueryParameter& WithMatch(QueryParameterMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline HttpQueryParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline HttpQueryParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the query parameter that will be matched on.</p>
     */
    inline HttpQueryParameter& WithName(const char* value) { SetName(value); return *this;}

  private:

    QueryParameterMatch m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
