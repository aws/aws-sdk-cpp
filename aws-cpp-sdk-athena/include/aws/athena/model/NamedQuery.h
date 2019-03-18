/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A query, where <code>QueryString</code> is the list of SQL query statements
   * that comprise the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/NamedQuery">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API NamedQuery
  {
  public:
    NamedQuery();
    NamedQuery(Aws::Utils::Json::JsonView jsonValue);
    NamedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The query name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The query name.</p>
     */
    inline NamedQuery& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The query name.</p>
     */
    inline NamedQuery& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The query name.</p>
     */
    inline NamedQuery& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The query description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The query description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The query description.</p>
     */
    inline NamedQuery& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The query description.</p>
     */
    inline NamedQuery& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The query description.</p>
     */
    inline NamedQuery& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The database to which the query belongs.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline NamedQuery& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline NamedQuery& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline NamedQuery& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline NamedQuery& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline NamedQuery& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The SQL query statements that comprise the query.</p>
     */
    inline NamedQuery& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The unique identifier of the query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline NamedQuery& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline NamedQuery& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the query.</p>
     */
    inline NamedQuery& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}


    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline NamedQuery& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline NamedQuery& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline NamedQuery& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet;

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
