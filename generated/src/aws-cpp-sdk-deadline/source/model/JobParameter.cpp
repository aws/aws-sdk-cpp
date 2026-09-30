/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/JobParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

JobParameter::JobParameter(JsonView jsonValue) { *this = jsonValue; }

JobParameter& JobParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("int")) {
    m_int = jsonValue.GetString("int");
    m_intHasBeenSet = true;
  }
  if (jsonValue.ValueExists("float")) {
    m_float = jsonValue.GetString("float");
    m_floatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("string")) {
    m_string = jsonValue.GetString("string");
    m_stringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bool")) {
    m_bool = jsonValue.GetString("bool");
    m_boolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rangeExpr")) {
    m_rangeExpr = jsonValue.GetString("rangeExpr");
    m_rangeExprHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stringList")) {
    Aws::Utils::Array<JsonView> stringListJsonList = jsonValue.GetArray("stringList");
    for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
      m_stringList.push_back(stringListJsonList[stringListIndex].AsString());
    }
    m_stringListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pathList")) {
    Aws::Utils::Array<JsonView> pathListJsonList = jsonValue.GetArray("pathList");
    for (unsigned pathListIndex = 0; pathListIndex < pathListJsonList.GetLength(); ++pathListIndex) {
      m_pathList.push_back(pathListJsonList[pathListIndex].AsString());
    }
    m_pathListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intList")) {
    Aws::Utils::Array<JsonView> intListJsonList = jsonValue.GetArray("intList");
    for (unsigned intListIndex = 0; intListIndex < intListJsonList.GetLength(); ++intListIndex) {
      m_intList.push_back(intListJsonList[intListIndex].AsString());
    }
    m_intListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("floatList")) {
    Aws::Utils::Array<JsonView> floatListJsonList = jsonValue.GetArray("floatList");
    for (unsigned floatListIndex = 0; floatListIndex < floatListJsonList.GetLength(); ++floatListIndex) {
      m_floatList.push_back(floatListJsonList[floatListIndex].AsString());
    }
    m_floatListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("boolList")) {
    Aws::Utils::Array<JsonView> boolListJsonList = jsonValue.GetArray("boolList");
    for (unsigned boolListIndex = 0; boolListIndex < boolListJsonList.GetLength(); ++boolListIndex) {
      m_boolList.push_back(boolListJsonList[boolListIndex].AsString());
    }
    m_boolListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intListList")) {
    Aws::Utils::Array<JsonView> intListListJsonList = jsonValue.GetArray("intListList");
    for (unsigned intListListIndex = 0; intListListIndex < intListListJsonList.GetLength(); ++intListListIndex) {
      Aws::Utils::Array<JsonView> nestedIntStringList2JsonList = intListListJsonList[intListListIndex].AsArray();
      Aws::Vector<Aws::String> nestedIntStringList2List;
      nestedIntStringList2List.reserve((size_t)nestedIntStringList2JsonList.GetLength());
      for (unsigned nestedIntStringList2Index = 0; nestedIntStringList2Index < nestedIntStringList2JsonList.GetLength();
           ++nestedIntStringList2Index) {
        nestedIntStringList2List.push_back(nestedIntStringList2JsonList[nestedIntStringList2Index].AsString());
      }
      m_intListList.push_back(std::move(nestedIntStringList2List));
    }
    m_intListListHasBeenSet = true;
  }
  return *this;
}

JsonValue JobParameter::Jsonize() const {
  JsonValue payload;

  if (m_intHasBeenSet) {
    payload.WithString("int", m_int);
  }

  if (m_floatHasBeenSet) {
    payload.WithString("float", m_float);
  }

  if (m_stringHasBeenSet) {
    payload.WithString("string", m_string);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_boolHasBeenSet) {
    payload.WithString("bool", m_bool);
  }

  if (m_rangeExprHasBeenSet) {
    payload.WithString("rangeExpr", m_rangeExpr);
  }

  if (m_stringListHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringListJsonList(m_stringList.size());
    for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
      stringListJsonList[stringListIndex].AsString(m_stringList[stringListIndex]);
    }
    payload.WithArray("stringList", std::move(stringListJsonList));
  }

  if (m_pathListHasBeenSet) {
    Aws::Utils::Array<JsonValue> pathListJsonList(m_pathList.size());
    for (unsigned pathListIndex = 0; pathListIndex < pathListJsonList.GetLength(); ++pathListIndex) {
      pathListJsonList[pathListIndex].AsString(m_pathList[pathListIndex]);
    }
    payload.WithArray("pathList", std::move(pathListJsonList));
  }

  if (m_intListHasBeenSet) {
    Aws::Utils::Array<JsonValue> intListJsonList(m_intList.size());
    for (unsigned intListIndex = 0; intListIndex < intListJsonList.GetLength(); ++intListIndex) {
      intListJsonList[intListIndex].AsString(m_intList[intListIndex]);
    }
    payload.WithArray("intList", std::move(intListJsonList));
  }

  if (m_floatListHasBeenSet) {
    Aws::Utils::Array<JsonValue> floatListJsonList(m_floatList.size());
    for (unsigned floatListIndex = 0; floatListIndex < floatListJsonList.GetLength(); ++floatListIndex) {
      floatListJsonList[floatListIndex].AsString(m_floatList[floatListIndex]);
    }
    payload.WithArray("floatList", std::move(floatListJsonList));
  }

  if (m_boolListHasBeenSet) {
    Aws::Utils::Array<JsonValue> boolListJsonList(m_boolList.size());
    for (unsigned boolListIndex = 0; boolListIndex < boolListJsonList.GetLength(); ++boolListIndex) {
      boolListJsonList[boolListIndex].AsString(m_boolList[boolListIndex]);
    }
    payload.WithArray("boolList", std::move(boolListJsonList));
  }

  if (m_intListListHasBeenSet) {
    Aws::Utils::Array<JsonValue> intListListJsonList(m_intListList.size());
    for (unsigned intListListIndex = 0; intListListIndex < intListListJsonList.GetLength(); ++intListListIndex) {
      Aws::Utils::Array<JsonValue> nestedIntStringListJsonList(m_intListList[intListListIndex].size());
      for (unsigned nestedIntStringListIndex = 0; nestedIntStringListIndex < nestedIntStringListJsonList.GetLength();
           ++nestedIntStringListIndex) {
        nestedIntStringListJsonList[nestedIntStringListIndex].AsString(m_intListList[intListListIndex][nestedIntStringListIndex]);
      }
      intListListJsonList[intListListIndex].AsArray(std::move(nestedIntStringListJsonList));
    }
    payload.WithArray("intListList", std::move(intListListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
