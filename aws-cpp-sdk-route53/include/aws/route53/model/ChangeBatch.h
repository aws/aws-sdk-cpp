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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Change.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>The information for a change request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeBatch">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ChangeBatch
  {
  public:
    ChangeBatch();
    ChangeBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
    ChangeBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline ChangeBatch& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline ChangeBatch& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> <i>Optional:</i> Any comments you want to include about a change batch
     * request.</p>
     */
    inline ChangeBatch& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline const Aws::Vector<Change>& GetChanges() const{ return m_changes; }

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline void SetChanges(const Aws::Vector<Change>& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline void SetChanges(Aws::Vector<Change>&& value) { m_changesHasBeenSet = true; m_changes = std::move(value); }

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline ChangeBatch& WithChanges(const Aws::Vector<Change>& value) { SetChanges(value); return *this;}

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline ChangeBatch& WithChanges(Aws::Vector<Change>&& value) { SetChanges(std::move(value)); return *this;}

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline ChangeBatch& AddChanges(const Change& value) { m_changesHasBeenSet = true; m_changes.push_back(value); return *this; }

    /**
     * <p>Information about the changes to make to the record sets.</p>
     */
    inline ChangeBatch& AddChanges(Change&& value) { m_changesHasBeenSet = true; m_changes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    Aws::Vector<Change> m_changes;
    bool m_changesHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
