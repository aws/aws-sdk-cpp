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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains the row and column of a location of a <code>Statement</code> element
   * in a policy document.</p> <p>This data type is used as a member of the <code>
   * <a>Statement</a> </code> type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Position">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API Position
  {
  public:
    Position();
    Position(const Aws::Utils::Xml::XmlNode& xmlNode);
    Position& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The line containing the specified position in the document.</p>
     */
    inline int GetLine() const{ return m_line; }

    /**
     * <p>The line containing the specified position in the document.</p>
     */
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }

    /**
     * <p>The line containing the specified position in the document.</p>
     */
    inline void SetLine(int value) { m_lineHasBeenSet = true; m_line = value; }

    /**
     * <p>The line containing the specified position in the document.</p>
     */
    inline Position& WithLine(int value) { SetLine(value); return *this;}


    /**
     * <p>The column in the line containing the specified position in the document.</p>
     */
    inline int GetColumn() const{ return m_column; }

    /**
     * <p>The column in the line containing the specified position in the document.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column in the line containing the specified position in the document.</p>
     */
    inline void SetColumn(int value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column in the line containing the specified position in the document.</p>
     */
    inline Position& WithColumn(int value) { SetColumn(value); return *this;}

  private:

    int m_line;
    bool m_lineHasBeenSet;

    int m_column;
    bool m_columnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
