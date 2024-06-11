/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the import of the metadata form type.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Import">AWS
   * API Reference</a></p>
   */
  class Import
  {
  public:
    AWS_DATAZONE_API Import();
    AWS_DATAZONE_API Import(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Import& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the import.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Import& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Import& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Import& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the import.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline Import& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline Import& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline Import& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
