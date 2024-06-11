/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A query, where <code>QueryString</code> contains the SQL statements that make
   * up the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/NamedQuery">AWS
   * API Reference</a></p>
   */
  class NamedQuery
  {
  public:
    AWS_ATHENA_API NamedQuery();
    AWS_ATHENA_API NamedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API NamedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NamedQuery& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NamedQuery& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NamedQuery& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NamedQuery& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NamedQuery& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NamedQuery& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database to which the query belongs.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline NamedQuery& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline NamedQuery& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline NamedQuery& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statements that make up the query.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline NamedQuery& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline NamedQuery& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline NamedQuery& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }
    inline NamedQuery& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}
    inline NamedQuery& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}
    inline NamedQuery& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup that contains the named query.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline NamedQuery& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline NamedQuery& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline NamedQuery& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
